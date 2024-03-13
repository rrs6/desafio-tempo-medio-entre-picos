# Desafio - Tempo Médio Entre Picos (TMEP)

# O que é necessário fazer ?
Bem, dado que é necessário calcular o tempo médio ente picos, precisamos de uma entrada ao qual a o qual o nosso código irá ser submetida. Sabendo disso, a entrada nada mais será do que o tempo em segundos (isso pra facilitar a implementação) e o valor seu valor respectivo. Para isso, a nossa entrada contará com um parâmetro 'N', que será responsável por contar a quantidade de observações do nosso sensor. Logo após, serão descritas entradas na forma de array de valores numéricos 'A' e outra sequência de valores numéricos 'B'. Eles serão o tempo e seu respectivo valor.

 Exemplo de entrada :.
- N
- A = [a1, a2, a3, ..., an]
- B = [b1, b2, b3, ..., bn]

- N = 3
- A = [56, 245, 213]
- B = [70, 60, 50]

No exemplo anterior nos temos N igual a 3, ou seja, serão observados três registro de tempo e valor em nosso sensor. Logo após os valores de A e B em forma de array, onde o valor da posição i-ésima está associado com o valor de a[i] e b[i].

Dito isso, iremos para a parte da implementação.

# Como será a implementação ?
Escolhi realizar a implementação em C++, por questão de preferência. Tenho a prática em solucionar problemas em Judges online como Codeforces, Atcoder e LeetCode e por isso escolhi a linguagem. Mas também poderia ser facilmente desenvolvida em Python.

A estrutura do código é a seguinte: Haverá um arquivo do código fonte da solução do desafio, chamado de 'script.cpp'. Além disso, também terá um arquivo de entrada 'input' e outro de saída 'output'. Será a partir delas que forneceremos dados e observaremos a resposta.

A lógica consiste em pegar os valores e primeiramente agrupa-los em tuplas que associa o tempo ao seu valor. Logo após, realizar uma filtragem nos registros que tem seu valor menor que 50, para que eles não sejam considerados no cálculo. Feito isso, ordenamos o nosso array, baseando-se no tempo e logo após fazemos os somatórios das diferenças consecutivas e dividimos pelo números de intervalos.

# O que eu senti de dificuldade durante o desafio ?
Bom a maior dificuldade foi entender bem o problema (não se compreendi completamente), mas depois de compreender o problema a implementação foi tranquila.

# Como foram gerados as entradas ?
Utilizei um gerador de números aleatórios para gerar os números das entradas e eu mesmo realizei os cálculos da saída esperada.

# O que é necessário para roda ?
Caso possua o gcc compiler em sua máquina, você só precisa compilar o código com o seguinte comando abaixo:

- g++ -std=c++17 scripts.cpp -o script

Uma vez que o código foi compilado, você precisa roda-lo passando os arquivos de entrada e saída como parâmetros, sendo assim é necessário rodar:

- ./script < input > output

Caso não tenho o gcc compiler em sua máquina, existem duas alternativa a serem feitas. Ou se instala o compilador para realizar os passo anteriores ou utiliza um compilador online como o Online Gdb.

# Algumas considerações
Esse desafio poderia ser escalado para um nível de dificuldade um pouco maior se fossem considerados algumas outras    questões, como por exemplo se a entrada fosse no formato HH:MM:SS.

A minha solução foi baseada no que eu compreendi do desafio, caso algo que fiz não esteja coerente com o que foi pedido, peço que por favor me deêm um feedback. Sou um programador que tem muito o que aprender e estou a procura de uma oportunidade de mostrar o que eu já sei fazer e melhor, aprender cada vez mais com as pessoas.
