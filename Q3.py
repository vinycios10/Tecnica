import json

# carrega o arquivo JSON
with open("C:/Users/vinyc/Downloads/dados.json", "r") as f:
    data = json.load(f)

# declara e inicializa as variaveis que informam menor/maior faturamento e media
maiorFat = menorFat = data[0]['valor']
maiorFatDia = menorFatDia = data[0]['dia']
media = 0.0
count = 0

# percorre a base de dados json
for entry in data:
    if(entry['valor'] == 0):            #pula dias com valor nulo
        continue
    if(entry['valor'] > maiorFat):      #guarda o maior faturamento
        maiorFat = entry['valor']
        maiorFatDia = entry['dia']
    if(entry['valor'] < menorFat):      #guarda o menor faturamento
        menorFat = entry['valor']
        menorFatDia = entry['dia']
    media = media + entry['valor']      #guarda a soma de valores
    count = count + 1                   #guarda a quantidade de elementos

#calcula a media
media = media/count
count = 0

#calcula o numero de dias em que o faturammento foi maior do que a media mensal
for entry in data:
    if(entry['valor'] > media):
        count = count + 1

#informa media e qual foi o dia e o valor do maior/menor faturamento
print(f"Maior faturamento: dia: {maiorFatDia}, valor: {maiorFat}")
print(f"Menor faturamento: dia: {menorFatDia}, valor: {menorFat}")
print(f"Numero de dias que o faturamento foi maior do que a media mensal: {count}")