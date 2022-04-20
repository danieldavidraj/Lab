from flask import Flask

app = Flask(__name__)

database = {}
database["user1"] = "abbb"
database["user2"] = "pass"
database["user3"] = "pass"

@app.route("/auth/<username>/<password>", methods=['GET'])
def auth(username, password):
    if(database[username] == password):
        response = "Authorized"
    else:
        response = "Not Authorized"

    return response

if __name__=="__main__":
    app.run()

