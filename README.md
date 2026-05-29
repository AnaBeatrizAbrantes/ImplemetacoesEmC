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

<img width="639" height="539" alt="image" src="https://github.com/user-attachments/assets/e8646a9b-8d14-4344-9a21-1c81474f43ce" />

### Resposta: Pacote 1 , Porque em uma fila o primeiro será o primeiro a ser atendido ( first in , first out )

## Parte 2 — Pilha

<img width="775" height="648" alt="image" src="https://github.com/user-attachments/assets/ef34e86d-e1b6-4605-9f2f-baf06ff4874e" />

### Resposta: Pacote 4 que é o topo ou (o ultimo será o primeiro, Last in , First out) porque a pilha remove o último elemento inserido.


## Parte 3 — Lista Encadeada

<img width="886" height="797" alt="image" src="https://github.com/user-attachments/assets/151a26ad-2f37-4a37-b405-96bf30377241" />

# Perguntas Teóricas

## 1.	 Porque os pacotes precisam ser enviados na mesma ordem em que chegam à rede, garantindo organização no processamento.

## 2.	Porque normalmente o pacote mais recente com erro é tratado primeiro, tornando a pilha adequada para retransmissões rápidas.

## 3.	Porque permite inserções e remoções dinâmicas de pacotes sem necessidade de reorganizar toda a estrutura.

## 4.	A fila, pois os pacotes aguardam atendimento conforme a ordem de chegada, podendo gerar tempo de espera.


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
