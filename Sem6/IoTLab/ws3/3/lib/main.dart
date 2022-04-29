import 'dart:async';
import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:http/http.dart' as http;

Future<User> fetchUser() async {
  final response =
      await http.get(Uri.parse('https://api.github.com/users/danieldavidraj'));

  if (response.statusCode == 200) {
    // If the server did return a 200 OK response,
    // then parse the JSON.
    return User.fromJson(jsonDecode(response.body));
  } else {
    // If the server did not return a 200 OK response,
    // then throw an exception.
    throw Exception('Failed to load');
  }
}

class User {
  final int id;
  final String login;
  final String name;
  final String company;
  final String location;

  const User(
      {required this.id,
      required this.login,
      required this.name,
      required this.company,
      required this.location});

  factory User.fromJson(Map<String, dynamic> json) {
    return User(
        id: json['id'],
        login: json['login'],
        name: json['name'],
        company: json['company'],
        location: json['location']);
  }
}

void main() => runApp(const MyApp());

class MyApp extends StatefulWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  late Future<User> futureUser;

  @override
  void initState() {
    super.initState();
    futureUser = fetchUser();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Fetch Data Example',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Fetch Data Example'),
        ),
        body: Center(
          child: FutureBuilder<User>(
            future: futureUser,
            builder: (context, snapshot) {
              if (snapshot.hasData) {
                return Container(
                  margin: const EdgeInsets.all(20),
                  child: Table(
                    defaultColumnWidth: const FixedColumnWidth(120.0),
                    border: TableBorder.all(
                        color: Colors.black,
                        style: BorderStyle.solid,
                        width: 2),
                    children: [
                      TableRow(children: [
                        Column(children: const [
                          Text('Username', style: TextStyle(fontSize: 20.0))
                        ]),
                        Column(children: [Text(snapshot.data!.login)])
                      ]),
                      TableRow(children: [
                        Column(children: const [
                          Text('Name', style: TextStyle(fontSize: 20.0))
                        ]),
                        Column(children: [Text(snapshot.data!.name)])
                      ]),
                      TableRow(children: [
                        Column(children: const [
                          Text('Company', style: TextStyle(fontSize: 20.0))
                        ]),
                        Column(children: [Text(snapshot.data!.company)]),
                      ]),
                      TableRow(children: [
                        Column(children: const [
                          Text('Location', style: TextStyle(fontSize: 20.0))
                        ]),
                        Column(children: [Text(snapshot.data!.location)])
                      ])
                    ],
                  ),
                );
              } else if (snapshot.hasError) {
                return Text('${snapshot.error}');
              }

              // By default, show a loading spinner.
              return const CircularProgressIndicator();
            },
          ),
        ),
      ),
    );
  }
}
