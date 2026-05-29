# Simulação de Redes de Computadores

Projeto desenvolvido para simular uma rede simples de computadores utilizando estruturas de dados clássicas. O objetivo é representar o funcionamento básico de transmissão de pacotes em redes de computadores por meio de conceitos fundamentais de estruturas de dados.

## Objetivos do Projeto

Simular o envio de pacotes em uma rede utilizando três estruturas específicas:
* **Fila:** Armazenamento de pacotes que aguardam transmissão.
* **Pilha:** Armazenamento de pacotes que apresentaram erro e aguardam retransmissão.
* **Lista Encadeada:** Controle de pacotes ativos circulando na rede.

---

## Conceitos e Operações Implementadas

### Fila (FIFO - First In, First Out)
A fila funciona no modelo em que o primeiro pacote a entrar é rigorosamente o primeiro a ser transmitido.
* **Operações:** Adicionar pacote, transmitir pacote e mostrar fila.

### Pilha (LIFO - Last In, First Out)
A pilha funciona no modelo em que o Visualizador do último pacote a apresentar falha será o primeiro a ser retransmitido.
* **Operações:** Registrar erro, retransmitir pacote e mostrar pilha.

### Lista Encadeada
Estrutura utilizada para o gerenciamento dinâmico dos pacotes ativos na rede. Cada pacote armazena as seguintes informações: ID, Origem, Destino e Status.
* **Operações:** Inserir pacote, buscar pacote, remover pacote entregue e listar pacotes.

---

## Resultados

### Parte 1 — Fila

<img width="639" height="539" alt="Simulação Fila" src="https://github.com/user-attachments/assets/e8646a9b-8d14-4344-9a21-1c81474f43ce" />

## Resposta: 
**Pacote 1. Em uma estrutura de fila, o primeiro elemento inserido é o primeiro a ser atendido (princípio First In, First Out).**

### Parte 2 — Pilha

<img width="775" height="648" alt="Simulação Pilha" src="https://github.com/user-attachments/assets/ef34e86d-e1b6-4605-9f2f-baf06ff4874e" />

## Resposta: 
**Pacote 4. O Pacote 4 ocupa o topo da estrutura. A pilha remove sempre o último elemento inserido (princípio Last In, First Out).**

### Parte 3 — Lista Encadeada

<img width="886" height="797" alt="Simulação Lista Encadeada" src="https://github.com/user-attachments/assets/151a26ad-2f37-4a37-b405-96bf30377241" />

---

## Respostas às Perguntas Teóricas

**1.	 Porque os pacotes precisam ser enviados na mesma ordem em que chegam à rede, garantindo organização no processamento.**

**2.	Porque normalmente o pacote mais recente com erro é tratado primeiro, tornando a pilha adequada para retransmissões rápidas.**

**3.	Porque permite inserções e remoções dinâmicas de pacotes sem necessidade de reorganizar toda a estrutura.**

**4.	A fila, pois os pacotes aguardam atendimento conforme a ordem de chegada, podendo gerar tempo de espera.**



---

## Tecnologias Utilizadas

* Linguagem C
* Estruturas de Dados
* VS Code
* GDB Online
* GitHub
* Ferramentas de pesquisa (Google, YouTube e documentações)

---

## Como Executar

```bash
# Clone o repositório
git clone [https://github.com/AnaBeatrizAbrantes/ImplemetacoesEmC.git](https://github.com/AnaBeatrizAbrantes/ImplemetacoesEmC.git)

# Acesse a pasta do projeto
cd ImplemetacoesEmC

# Execute o programa
