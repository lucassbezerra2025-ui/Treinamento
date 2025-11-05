
---

💰 Sistema de Cálculo de Desconto e Bônus

Este programa em linguagem C calcula o desconto aplicado de acordo com o valor bruto gasto e, posteriormente, aplica um bônus ou taxa dependendo da forma de pagamento escolhida pelo usuário. Ao final, é exibida uma Nota Fiscal com todos os valores calculados.


---

✅ Funcionalidades

Função	Descrição

CalcularDesconto(float vb)	Calcula o valor do desconto com base no valor bruto gasto.
CalcularBonus(float vlc, char codigo)	Calcula o bônus (para pagamento à vista) ou taxa (para pagamento a prazo).
Exibe Nota Fiscal	Mostra valor bruto, desconto, bônus/taxa e valor final.



---

🧮 Regras do Desconto

Valor Bruto (R$)	Desconto

Até R$ 100	5%
De R$ 100,01 a R$ 500	10%
Acima de R$ 500	15%



---

💳 Formas de Pagamento

Código	Tipo de Pagamento	Percentual aplicado

V ou v	À Vista	Bônus de 3%
P ou p	A Prazo	Taxa de 5%



---

📝 Exemplo de Saída (Nota Fiscal)

========================
 《    NOTA FISCAL    》
========================
|=> Valor Bruto: R$ 250.00
|=> Desconto: R$ 25.00
|=> Bônus: R$ 6.75
|=> Valor Líquido: R$ 231.75


---

▶️ Como Executar

1. Salve o código em um arquivo, por exemplo:

programa.c


2. Compile usando GCC:

gcc programa.c -o programa


3. Execute:

./programa



---

👨‍💻 Autor

Desenvolvido para fins de estudo e prática de lógica de programação e funções em C.


---
