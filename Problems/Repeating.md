## **F.循環小數** <font color = 'gray'>***Repeating Decimal***</font>
`time limit` 2s

`memory limit` 256MB

### ***Problem***
$\space \space$ 循環⼩數，是從⼩數部分的某⼀位起，⼀個數字或幾個數字，依次不斷重複出現的⼩數。⽽在本題中，⼀個循環⼩數的最短循環節⻑度，就是不斷重複出現的數字數量的最⼩值，如 $\frac{1}{7}=0.\overline{142857}$ 的最短循環節⻑度就是 6。⽐如請撰寫⼀個程式，計算⼀個分數的最短循環節⻑度。

$\space \space$ 第⼀⾏有⼀整數 $T$ 代表有多少測試資料料。每⼀筆測試資料恰有⼀⾏，該⾏有兩個數字 $p$ 跟 $q$，以空格隔開，代表要處理的分數為 $\frac{p}{q}$ 。

$\space \space$ 對每⼀個測試資料，輸出⼀個數字，代表 $\frac{p}{q}$ 的循環節⻑度。

### ***Input***

$T$
$p_1 \space q_1$
$p_1 \space q_2$
$...$
$p_T \space q_T$

### ***Output***

$ans_1$
$ans_2$
$...$
$ans_T$

### ***Note***

- $T \leq 25$
- $1 \leq p \leq q \leq 10^6$
- $循環長度保證不超過10^6$
- $保證輸⼊沒有有限⼩數$

### ***Sample Input***

```
3
1 3
2 7
1 101
```

### ***Sample Output***

```
1
6
4
```

### ***Subtask***

- ***subtask1***: $30\\%$ $1 \leq p \leq q < 10$
- ***subtask2***: $70\\%$ ***As statement***

<div style="page-break-after: always"></div>