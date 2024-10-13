import json

# carrega o arquivo JSON
with open("C:/Users/vinyc/Downloads/dados2.json", "r") as f:
    data = json.load(f)

# declara e inicializa a variavel total
total = 0.0

# guarda o valor total 
for entry in data:
    total = total + entry['valor']

# calcula e imprime o valor percentual com 2 casas decimais
print("Valor Percentual de cada estado:")
for entry in data:
    print(f"{entry['estado']}: {round(entry['valor']/total*100,2)}")