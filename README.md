# Simulação de Redes de Computadores

Projeto desenvolvido para simular uma rede simples de computadores utilizando estruturas de dados clássicas:

* Fila (Queue)
* Pilha (Stack)
* Lista Encadeada (Linked List)

O objetivo é representar o funcionamento básico de transmissão de pacotes em redes de computadores usando conceitos de estruturas de dados.


# Objetivo

Simular o envio de pacotes em uma rede utilizando:

* **Fila** → pacotes aguardando transmissão
* **Pilha** → pacotes com erro aguardando retransmissão
* **Lista Encadeada** → pacotes ativos circulando na rede


# Conceitos

## Fila (FIFO)

A fila funciona no modelo:

> First In, First Out

Ou seja, o primeiro pacote que entra é o primeiro a ser transmitido.

### Operações implementadas

* Adicionar pacote
* Transmitir pacote
* Mostrar fila


## Pilha (LIFO)

A pilha funciona no modelo:

> Last In, First Out

O último pacote que falhou será o primeiro retransmitido.

### Operações implementadas

* Registrar erro
* Retransmitir pacote
* Mostrar pilha


## Lista Encadeada

Estrutura utilizada para controlar os pacotes ativos na rede.

### Informações armazenadas

Cada pacote contém:

* ID
* Origem
* Destino
* Status

### Operações implementadas

* Inserir pacote
* Buscar pacote
* Remover pacote entregue
* Listar pacotes


# Pacotes Utilizados

| Pacote   | Tamanho |
| -------- | ------- |
| Pacote 1 | 500 KB  |
| Pacote 2 | 300 KB  |
| Pacote 3 | 700 KB  |
| Pacote 4 | 200 KB  |


# Simulação Realizada

## Parte 1 — Fila

Pacotes recebidos:

1. Pacote 1
2. Pacote 2
3. Pacote 3
4. Pacote 4

### Resultado

O primeiro pacote transmitido será:

**Pacote 1**

Pois a fila segue a ordem de chegada.


## Parte 2 — Pilha

Pacotes com erro:

* Pacote 2
* Pacote 4

### Resultado

O primeiro pacote retransmitido será:

**Pacote 4**

Pois a pilha remove o último elemento inserido.

---

## Parte 3 — Lista Encadeada

Fluxo da simulação:

1. Chegada de 4 pacotes
2. Transmissão de 2 pacotes
3. Um pacote apresenta erro
4. Um pacote é entregue
5. Remoção do pacote entregue da lista

---

# Perguntas Teóricas

## 1. Por que a fila representa bem a transmissão de pacotes?

Porque os pacotes precisam ser enviados na mesma ordem em que chegam à rede, garantindo organização no processamento.


## 2. Por que a pilha pode representar retransmissão?

Porque normalmente o pacote mais recente com erro é tratado primeiro, tornando a pilha adequada para retransmissões rápidas.


## 3. Por que a lista encadeada ajuda no controle de pacotes ativos?

Porque permite inserções e remoções dinâmicas de pacotes sem necessidade de reorganizar toda a estrutura.


## 4. Qual estrutura melhor representa atraso de fila?

A fila, pois os pacotes aguardam atendimento conforme a ordem de chegada, podendo gerar tempo de espera.


# Tecnologias Utilizadas

* Linguagem C
* Estruturas de Dados
* VsCode
* GBD Online
* GitHub
* Google/Youtube e outras ferramentas de pesquisa

---

# Como Executar

```bash
# Clone o repositório
git clone https://github.com/seu-usuario/seu-repositorio.git

# Acesse a pasta
cd seu-repositorio

# Execute o programa
```

---

# Autores
Nayara Emelly e Ana Beatriz 
