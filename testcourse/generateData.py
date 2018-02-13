import json
import random
def read_data(file):
    data = []
    for line in file:
        line = line.strip('\n')
        data.append(line)
    return data
data = {}
users = []
file = open('name.txt')
nameData = read_data(file)
nameCout = len(nameData)
totalCount = 100
friendCountMax = 10
randomList = random.sample(range(0,nameCout),totalCount)

users.clear()
seed = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

for i in range(1,totalCount):
    user = {}
    user['userId'] = i;
    user['userName'] = nameData[randomList[i]];
    passw = []
    for j in range(0,6):
        passw.append(random.choice(seed))
    password = ''.join(passw)
    user['password'] = password
    count = random.randint(0,friendCountMax)
    randomCountList = random.sample(range(0,totalCount),count)
    user['friends'] = []
    for j in range(0,count):
        user['friends'].append(randomCountList[j])
    count = random.randint(0,friendCountMax)
    randomCountList = random.sample(range(0,totalCount),count)
    user['attentions'] = []
    for j in range(0,count):
        user['attentions'].append(randomCountList[j])

    count = random.randint(0,friendCountMax)
    randomCountList = random.sample(range(0,totalCount),count)
    user['fans'] = []
    for j in range(0,count):
        user['fans'].append(randomCountList[j])

    count = random.randint(0,friendCountMax)
    randomCountList = random.sample(range(0,totalCount),count)
    user['hobbies'] = []
    for j in range(0,count):
        user['hobbies'].append(randomCountList[j])
    users.append(user)
data['data'] = users
with open('./users.json','w',encoding='utf-8') as f:
    json.dump(data,f,ensure_ascii=False)


