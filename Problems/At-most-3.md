## **A.祭典** <font color = 'gray'>***At Most 3***</font>
`time limit` 2s

`memory limit` 256MB

### ***Problem***
$\space \space$ 在一個遙遠的星球上，有一群居住在山洞中的原始部落。他們每年都會舉行一場盛大的祭典，當中最重要的儀式就是以族人作為祭品獻給神明，而神明的飽足感為作為祭品的**族人的體重**。而且體重是可疊加的，換句話說，如果以兩個人以上為祭品，神明的滿意度則為**體重和**。\
$\space \space$ 到了儀式開始的時間了，現在有 $N$ 個人，第 $i$ 人的體重為 $w_i$ ，請你幫忙計算出神明可能獲得的滿意度的**數量**。幸運的是，神明最近在減肥，食量有限，所以至多只需要交出三位族人即可(至少需交出一人)且滿意度超過 $W$ 的都不需計算。

### ***Input***

$N, \space W$ \
$w_1, w_2, ..., w_n$

### ***Output***

$Ans$

- 為神明可能獲得的滿意度的總數

### ***Note***

- $1 \leq N \leq 100$
- $1 \leq W \leq 10^{12}$
- $1 \leq A_i \leq 10^{12}$

### ***Sample input 1***

```
2 10
1 3
```

### ***Sample output 1***

```
2 1
2 3
```

### ***Sample Input 2***
```
2 1
2 3
```

### ***Sample Output 2***
```
0
```

>可能獲得的滿意度有 $2, 3, 5$ ，但因為三者皆大於 $W$ ，所以輸出 $0$

### ***Sample Input 3***
```
4 12
3 3 3 3
```

### ***Sample Output 3***
```
3
```

### ***Subtask***
 - ***subtask1***: $35\\%$ $1 \leq W, N \times A_i \leq 10 ^9$
 - ***subtask2***: $65\\%$ ***As statement***

<div style="page-break-after: always"></div>