# Projeto-4
 

Requisitos
O banco QuemPoupaTem trabalha com dois tipos de conta:

Comum: Cobra taxa de 5% a cada débito realizado e permite um saldo negativo de até R$ 1.000,00.
Plus: Cobra taxa de 3% a cada débito realizado e permite um saldo negativo de até R$ 5.000,00.
O sistema deve:

Funcionar em loop infinito até que seja escolhida a opção de sair.
Apresentar um menu de opções para o operador, com as seguintes operações:
Novo cliente
Apaga cliente
Listar clientes
Débito
Depósito
Extrato
Transferência Entre Contas
Sair
Armazenar até 1000 clientes e as informações das últimas 100 operações (depósito, saque, transferência) realizadas pelo cliente.
Garantir a persistência dos dados utilizando arquivos binários.
Funções
Cada opção do menu é implementada como uma função. Abaixo estão detalhadas as operações de cada função:

1. Novo cliente
Cria um novo cliente com os seguintes dados solicitados:

Nome
CPF
Tipo de conta (Comum ou Plus)
Valor inicial da conta
Senha do usuário
2. Apaga cliente
Remove um cliente com base no CPF fornecido.

3. Listar clientes
Lista todos os clientes cadastrados no sistema.

4. Débito
Realiza um débito na conta do cliente com os seguintes dados solicitados:

CPF
Senha
Valor
O débito só pode ser efetuado se o CPF e a senha estiverem corretos.

5. Depósito
Realiza um depósito na conta do cliente com os seguintes dados solicitados:
CPF
Valor

7. Extrato
Gera um arquivo com o histórico de todas as operações realizadas na conta do cliente, incluindo valores e tarifas

8. Transferência Entre Contas
Realiza a transferência de um valor determinado de uma conta (Origem) para outra conta (Destino) com os seguintes dados solicitados:

CPF (Origem)
Senha (Origem)
CPF (Destino)
Valor
A transferência só pode ser realizada se o CPF e a senha da conta de origem estiverem corretos.

