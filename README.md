# Torre de Hanói (Tower of Hanoi)

1. [Introução](#1-introduÇÃo)
2. [Abordagem](#2-abordagem)
3. [Tipos Abstratos de Dados ](#3-tipos-abstratos-de-dadis-tad)
4. Cáculos
5. etc

---

## 1. INTRODUÇÃO

*"A Torre de Hanói é um jogo ou quebra-cabeça matemático. É composto por três hastes e um número de discos de tamanhos diferentes, que podem deslizar para qualquer haste. O quebra-cabeça começa com os discos em uma pilha organizada em ordem crescente de tamanho em uma haste, a menor na parte superior, criando assim uma forma cônica." [Wikipédia](https://en.wikipedia.org/wiki/Tower_of_Hanoi)*

![GIF](https://media.giphy.com/media/rutTKcoKSCSYM/giphy.gif)

---
## 2. ABORDAGEM

usar as hastes da torre como uma [pillha](#3-4-stack), e uma [árvore binária perfeta](#3-1-perfectbinarybree) implementada como um [vetor](#3-2-array) para armazenar as movimentações dos discos, onde cada nó da árvore é um [par ordenado](#3-3-pair) \(a, b\), tal que \"a\" é o índice da haste de origem e \"b\" o índece da haste de destino. Sendo cada nível da árvore representando um disco\(Separado por cores na figura abaixo\).

---

## 3. Tipos Abstratos de Dadis TAD

![Scheme](https://github.com/edulourenzo/hanoi/blob/master/Perfect%20Binary%20Tree%20(Array%20implementation).jpg)

###     3.1 Perfect Binary Tree

        *"Na ciência da computação, uma árvore binária é uma estrutura de dados de árvore na qual cada nó tem no máximo dois filhos, chamados de filho esquerdo e filho certo. Uma definição recursiva usando apenas noções de teoria dos conjuntos é que uma árvore binária \(não vazia\) é uma tupla \(L, S, R\), onde L e R são árvores binárias ou o conjunto vazio e S é um conjunto unitário" [Wipédia](https://en.wikipedia.org/wiki/Binary_tree)*

        *"Uma árvore binária perfeita é uma árvore binária na qual todos os nós internos têm dois filhos e todas as folhas têm a mesma profundidade ou mesmo nível."
        [Wikipédia](https://en.wikipedia.org/wiki/Binary_tree#Types_of_binary_trees)*

###     3.2 Array
        
        *"As árvores binárias também podem ser armazenadas em ordem de largura como uma estrutura de dados implícita em matrizes e, se a árvore for uma árvore binária completa, esse método não desperdiçará espaço. Nesse arranjo compacto, se um nó tem um índice i, seus filhos são encontrados nos índices 2i + 1 \(para o filho esquerdo\) e 2i + 2 \(para o direito\), enquanto seu pai \(se houver\) é encontrado no índice \(i-1\)/2 \(assumindo que a raiz tenha o índice zero\).[Wikipédia](https://en.wikipedia.org/wiki/Binary_tree#Arrays)"*

        ![Array](https://en.wikipedia.org/wiki/Binary_tree#/media/File:Binary_tree_in_array.svg)

###     3.3 Pair
        Uma tupla de dois elementos inteiros formando um par ordenad \(a, b\).
        [Wikipédia](https://en.wikipedia.org/wiki/Ordered_pair)

###     3.4 Stack
    
        *"Na ciência da computação, uma pilha é um tipo abstrato de dados que serve como uma coleção de elementos, com duas operações principais:

        * **push**, que adiciona um elemento à coleção e
        * **pop**, que remove o elemento adicionado mais recentemente que ainda não foi removido.
        
        A ordem na qual os elementos saem de uma pilha dá origem ao seu nome alternativo, LIFO \(Last In, First Out \[último a entrar, primeiro a sair\]\). Além disso, uma operação de _peek_ pode dar acesso ao topo sem modificar a pilha. O nome "pilha" para esse tipo de estrutura vem da analogia com um conjunto de itens físicos empilhados uns sobre os outros, o que facilita tirar um item do topo da pilha, enquanto obtenção de um item mais profundo na pilha pode exigir a retirada de vários outros itens."[Wikipedia](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))*

## Task List

- [x] Cria vetor de pilhas representando as hastes
- [x] Transformar árvore binária perfeita em um vetor
- [ ] Criar funções para nós da árvore
        - [x] Filho direito
        - [x] Filho esquerdo
        - [ ] Pai
- [ ] Criar fun;ão anternante para horário e anti-horário.
- [ ] Preencher por níveis a árvore usando a função alternante
- [ ]  Criar função iterativa EM Ordem para percorrer a árvore

- [ ]  Criar modo gráfico em formato de texto \(terminal\)
- [ ]  Criar modo gráfico em formato OpenGL