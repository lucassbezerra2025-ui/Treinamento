
# 💰 Sistema de Cálculo de Desconto e Bônus em C

Este programa em **C** calcula o **valor final de uma compra**, aplicando **descontos** e **bônus/acréscimos** conforme o valor da compra e a forma de pagamento escolhida pelo cliente.

---

## 🧮 Descrição do Programa

O sistema solicita ao usuário:
1. O **valor bruto da compra**.
2. A **forma de pagamento**, podendo ser:
   - `V` → **À Vista** (ganha bônus de 3%)
   - `P` → **A Prazo** (acréscimo de 5%)

O programa então:
- Aplica o **desconto** de acordo com a faixa de valor.
- Calcula o **bônus** ou **acréscimo**.
- Exibe o **valor com desconto** e o **valor final** após o bônus/acréscimo.

---

## ⚙️ Regras de Negócio

### 🧾 Desconto (`CalcularDesconto`)
| Valor da Compra (R$) | Desconto Aplicado |
|-----------------------|------------------|
| Até 100,00            | 5%               |
| De 100,01 a 500,00    | 10%              |
| Acima de 500,00       | 15%              |

---

### 💳 Bônus/Acréscimo (`CalcularBonus`)
| Forma de Pagamento | Regra Aplicada |
|--------------------|----------------|
| `V` ou `v`         | Bônus de 3% sobre o valor líquido |
| `P` ou `p`         | Acréscimo de 5% sobre o valor líquido |

---

## 📘 Estrutura do Código

### Função `CalcularDesconto(float vb)`
Calcula e retorna o valor da compra **após o desconto**, com base nas faixas de preço.

### Função `CalcularBonus(float vlc, char codigo)`
Aplica o **bônus** (3%) se o pagamento for à vista, ou o **acréscimo** (5%) se for a prazo.

### Função `main()`
1. Lê o valor bruto e o código de pagamento.
2. Chama as funções de cálculo.
3. Exibe o valor com desconto e o valor final com bônus/acréscimo.

---

## 💻 Exemplo de Execução

```

===== Digite o valor bruto =====

* Valor Bruto: 250
  ===== Digite a forma de pagamento =====
  [V] Pagamento à Vista
  [P] Pagamento à Prazo
  Opção: V
* Valor bruto com desconto é: 225.00
* Bônus: 218.25

```

### Explicação do exemplo:
- Valor bruto: **R$ 250,00**
- Desconto de 10% → **R$ 225,00**
- Bônus de 3% sobre o valor líquido → **R$ 218,25**

---

## 🧩 Estrutura de Arquivos

```

📁 projeto_desconto_bonus/
│
├── 📄 main.c         # Código-fonte principal em C
└── 📘 README.md      # Documentação do projeto

````

---

## 🚀 Como Executar o Programa

1. Certifique-se de ter o compilador **GCC** instalado.
2. Compile o código com o seguinte comando:
   ```bash
   gcc main.c -o programa
````

3. Execute o programa:

   ```bash
   ./programa
   ```

---
