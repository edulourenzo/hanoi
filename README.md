# Torre de Hanói (Tower of Hanoi)

1. [Introução](#1-introduÇÃo)
2. [Abordagem](#2-abordagem)
3. [Algoritmo](https://github.com/edulourenzo/hanoi#3-algoritmo)
4. [Tipos Abstratos de Dados](#4-tipos-abstratos-de-dados-tad)

---

## 1. INTRODUÇÃO

*"A Torre de Hanói é um jogo ou quebra-cabeça matemático. É composto por três hastes e um número de discos de tamanhos diferentes, que podem deslizar para qualquer haste. O quebra-cabeça começa com os discos em uma pilha organizada em ordem crescente de tamanho em uma haste, a menor na parte superior, criando assim uma forma cônica." [Wikipédia](https://en.wikipedia.org/wiki/Tower_of_Hanoi)*

![GIF](https://media.giphy.com/media/rutTKcoKSCSYM/giphy.gif)

---

## 2. ABORDAGEM

Usar as hastes da torre como uma [pillha](#44-stack), e uma [árvore binária perfeita](#31-perfect-binary-tree) implementada como um [vetor](#42-array) para armazenar as movimentações dos discos, onde cada nó da árvore é um [par ordenado](#43-pair) \(a, b\), tal que \"a\" é o índice da haste de origem e \"b\" o índece da haste de destino. Sendo cada nível da árvore representando um disco\(Separado por cores na figura abaixo\).

---
## 3. ALGORITMO

O algoritmo consiste em:
* Criar três [pillhas](#44-stack) para representar as hastes.
* Criar "N" discos, onde inicialmente são colocados em ordem crescente do topo até a base da primeira haste.
* Criar uma [árvore binária perfeita](#41-perfect-binary-tree) sendo a quantidade de níveis da árvore igual a quantidade de discos.
* Preencher os nós por nível, onde o nó inical de cada nível consiste no índice da primeira haste e o índice da haste vizinha, denominados "origem" e  "destino".  
  E o nó seguinte de mesmo nível é prenchido com o índice de destino do nó anterior e o índice da haste vizinha.
* A vizinhança segue uma rotação modular dos índices das hastes, que alternam no sentido horário e anti-horário por nível da árvore, sendo o primeiro nível no sentido anti-horário.
* Faz uma varredura [em ordem](https://en.wikipedia.org/wiki/Tree_traversal#In-order_(LNR)) dos nós da arvore e movendo os discos da haste de origem para a haste de destino conforme armazenado no preenchimento dos nós.
* Após a vareedura todos os discos estarão em ordem crescente do topo até a base da na ultima haste.

---

## 4. Tipos Abstratos de Dados TAD

![Scheme](https://github.com/edulourenzo/hanoi/blob/master/Perfect%20Binary%20Tree%20(Array%20implementation).jpg)

### 4.1. Perfect Binary Tree

*"Na ciência da computação, uma árvore binária é uma estrutura de dados de árvore na qual cada nó tem no máximo dois filhos, chamados de filho esquerdo e filho certo. Uma definição recursiva usando apenas noções de teoria dos conjuntos é que uma árvore binária \(não vazia\) é uma tupla \(L, S, R\), onde L e R são árvores binárias ou o conjunto vazio e S é um conjunto unitário" [Wipédia](https://en.wikipedia.org/wiki/Binary_tree)*

*"Uma árvore binária perfeita é uma árvore binária na qual todos os nós internos têm dois filhos e todas as folhas têm a mesma profundidade ou mesmo nível."
[Wikipédia](https://en.wikipedia.org/wiki/Binary_tree#Types_of_binary_trees)*

### 4.2. Array
        
*"As árvores binárias também podem ser armazenadas em ordem de largura como uma estrutura de dados implícita em matrizes e, se a árvore for uma árvore binária completa, esse método não desperdiçará espaço. Nesse arranjo compacto, se um nó tem um índice i, seus filhos são encontrados nos índices 2i + 1 \(para o filho esquerdo\) e 2i + 2 \(para o direito\), enquanto seu pai \(se houver\) é encontrado no índice \(i-1\)/2 \(assumindo que a raiz tenha o índice zero\).[Wikipédia](https://en.wikipedia.org/wiki/Binary_tree#Arrays)"*

![Array](https://github.com/edulourenzo/hanoi/blob/master/450px-Binary_tree_in_array.svg.png)

### 4.3. Pair

Uma tupla de dois elementos inteiros formando um par ordenad \(a, b\). [Wikipédia](https://upload.wikimedia.org/wikipedia/commons/thumb/8/86/Binary_tree_in_array.svg/450px-Binary_tree_in_array.svg.png)

### 4.4. Stack
    
*"Na ciência da computação, uma pilha é um tipo abstrato de dados que serve como uma coleção de elementos, com duas operações principais:

* **push**, que adiciona um elemento à coleção e
* **pop**, que remove o elemento adicionado mais recentemente que ainda não foi removido.

A ordem na qual os elementos saem de uma pilha dá origem ao seu nome alternativo, LIFO \(Last In, First Out \[último a entrar, primeiro a sair\]\). Além disso, uma operação de _peek_ pode dar acesso ao topo sem modificar a pilha. O nome "pilha" para esse tipo de estrutura vem da analogia com um conjunto de itens físicos empilhados uns sobre os outros, o que facilita tirar um item do topo da pilha, enquanto obtenção de um item mais profundo na pilha pode exigir a retirada de vários outros itens."[Wikipedia](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))*

---

## Task List

- [x] Cria vetor de pilhas representando as hastes
- [x] Transformar árvore binária perfeita em um vetor
- [x] - Criar função de aritmética modular
- [x] Criar função para inicializar a árvore
- [x] - Criar função matemática anternante para horário e anti-horário.
- [x] - Preencher por níveis a árvore usando a função alternante 
- [x] Criar funções para nós da árvore
- [x] - Pai
- [x] - Filho esquerdo
- [x] - Filho direito
- [x]  Criar função iterativa EM Ordem para percorrer a árvore
- [x]  Criar função para mover os discos entre as hastes
- [x]  Criar modo gráfico em formato de texto \(terminal\)
- [ ]  Criar modo gráfico em formato OpenGL
