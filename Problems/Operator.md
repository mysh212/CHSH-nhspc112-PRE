## **G.運算子** ***<font color='#AAAAAA'>Operator</font>***
`time limit` 1s

`memory limit` 256MB

### ***Problem***

***amberela***最近在修***cyana***教授的課，某天教授提出了個問題：

> 給你 $3$ 個 $True$ 、 $5$ 個 $False$ ，請問他們 $\oplus$ 出來的結果為何?

***amberela***馬上就答出答案是 $True$ 。

於是***Cyana***教授決定出個世紀大難題：

> 給你 $12345678987654321$ 個 $True$ 、 $98765432123456789$ 個 $False$ ，請問他們 $\oplus$ 出來的結果為何?

這個問題讓***ysh***十分苦惱，甚至到現在都還沒算完......。
現在給你 $a$ 個 $True$ 、 $b$ 個 $False$ ，***ysh***想問你將他們 $\oplus$ 後的結果為何?

注：
$\oplus$ 為一種位元運算，我們稱之為***XOR***，其具有交換律。

且
$x\ \oplus\ y\ \oplus\ z\ =\ x\ \oplus\ (y\ \oplus\ z)$

令 $x$ $\oplus$ $y$ $=$ $z$
則


| $x$ |  $y$ |  $z$ |
|:-------------:|:-------------:|:-------------:|
|   $True$   |   $True$   |   $False$   |
|   $True$   |   $False$   |   $True$   |
|   $False$   |   $True$   |   $True$   |
|   $False$   |   $False$   |   $False$   |


### ***Input***

$a$ $b$

### ***Output***

$Ans$

$Ans \in \\{True,False\\}$

<div style="page-break-after: always"></div>

### ***Note***

$0 \leq a,b \leq 10^{18}$

定義當 $a = b = 0$ 時， $Ans$ 為 $False$ 。

### ***Sample Input 1***

```
0 0
```

### ***Sample Output 1***

```
False
```

### ***Sample Input 2***

```
12345678987654321 98765432123456789
```

### ***Sample Output 2***

```
True
```

### ***Subtask***

 - ***subtask1***: $40\\%$ $0 \leq a,b \leq 10 ^ 5$
 - ***subtask2***: $60\\%$ ***As statement***

<div style="page-break-after: always"></div>
