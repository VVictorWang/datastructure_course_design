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
file = open('test.txt')
nameData = read_data(file)
nameCout = len(nameData)
totalCount = 10000
friendCountMax = 350
randomList = random.sample(range(0, nameCout), totalCount)

users.clear()
seed = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

for i in range(1, totalCount):
    user = {}
    user['userId'] = i
    user['userName'] = nameData[randomList[i]]
    # passw = []
    # for j in range(0, 6):
    #     passw.append(random.choice(seed))
    # password = ''.join(passw)
    # user['password'] = password
    count = random.randint(0, friendCountMax)
    randomCountList = random.sample(range(0, totalCount), count)
    user['friends'] = []
    for j in range(0, count):
        if(randomCountList[j] != i and randomCountList[j] != 0 and randomCountList[j] not in user['friends']):
            user['friends'].append(randomCountList[j])
    count = random.randint(0, friendCountMax)
    randomCountList = random.sample(range(0, totalCount), count)
    
    user['attentions'] = []
    for j in range(0, count):
        if(randomCountList[j] != i and randomCountList[j] != 0 and randomCountList[j] not in user['attentions']):
            user['attentions'].append(randomCountList[j])

    count = random.randint(0, friendCountMax)
    randomCountList = random.sample(range(0, totalCount), count)
    user['fans'] = []
    for j in range(0, count):
        if(randomCountList[j] != i and randomCountList[j] != 0 and randomCountList[j] not in user['fans']):
            user['fans'].append(randomCountList[j])
    count = random.randint(0, friendCountMax)
    randomCountList = random.sample(range(0, totalCount), count)
    user['hobbies'] = []
    for j in range(0, count):
        if(randomCountList[j] != i and randomCountList[j] != 0 and randomCountList[j] not in user['hobbies']):
            user['hobbies'].append(randomCountList[j])
    users.append(user)
for user in users:
    friends = user['friends']
    for friendId in friends:
        if user['userId'] not in users[friendId - 1]['friends']:
            users[friendId - 1]['friends'].append(user['userId'])
    attentions = user['attentions']
    for attentionId in attentions:
        if user['userId'] not in users[attentionId - 1]['fans']:
            users[attentionId - 1]['fans'].append(user['userId'])
    fans = user['fans']
    for fanId in fans:
        if user['userId'] not in users[fanId - 1]['attentions']:
            users[fanId - 1]['attentions'].append(user['userId'])
data['data'] = users
with open('./users.json', 'w', encoding='utf-8') as f:
    json.dump(data, f, ensure_ascii=False)
