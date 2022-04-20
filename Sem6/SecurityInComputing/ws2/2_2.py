import requests
import string
from itertools import product

for password in product(string.ascii_lowercase, repeat = 4):
    password = ''.join(password)
    username = "user1"
    print(password)
    
    url = f"http://127.0.0.1:5000/auth/{username}/{password}"
    response = requests.get(url)
    print(response.text)
    if response.text == "Authorized":
        break
    
