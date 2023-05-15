# **彰化高中112學年度資訊學科能力競賽校內初選**

## **試場規則**

### **違規事項**

 - 行動裝置未置於教室外、教室前後、監考老師桌上、個人電腦主機上，經監考老師發現。
 - 於考試期間使用行動裝置。
 - 配戴具通訊功能的穿戴裝置。
 - 嘗試或以任何方式使其他考生無法正常使用系統。
 - 於考試期間和除監考老師以外之任何人交談。

上述行為被監考老師發現，並屢勸不聽者，將登記於考生簽到表，並在賽後系統測試時將總成績 $\times 0.001$   並四捨五入至個位。

### **賽制**

 - 本次競賽採`OI`制度，有部分分，無罰時，並取每筆提交的子題聯集為總分。
   - 例如：某題共有兩筆提交，第一筆通過子測資 $\\{1,2\\}$ 、第二筆通過子測資 $\\{2,3\\}$ ，則總分為第 $\\{1,2,3\\}$ 筆子測資的分數相加。
 - 本次為開板賽，網址為[http://192.168.8.1:12345](http://192.168.8.1:12345)，競賽期間無封板。
 - 競賽結束後會做一次***System test***(系統測試)，所有成績以其為準。
 - 若競賽中發現有**超過5人**使用假解，我們將增加測資並將所有提交***Rejudge***，並通知使用者。最後三十分鐘不在此限。
 - 提交的冷卻時間(CD time)為 $60$ 秒，最後 $30$ 分鐘不在此限。
 - 對於每一題，使用者最多可以進行 $100$ 筆提交。

### **系統使用說明**

 - 總題本在第***A***題的題目敘述頁面中。
 - 使用者允許許使用 ***C/C++11/C++17*** 提交程式碼。
 - 若結果為***Execution timed out (wall clock limit exceeded)***，則表示系統因為某筆提交繁忙中，請檢查你的程式碼使否有可能超過執行時間，並稍後再試。

### **資源**

 - 賽後我們將會在一天內**彰中資訊社群**公告本次題解、總成績。

 - 網址：
   - [彰中資訊社群](https://www.facebook.com/groups/chshcs/)
   - [本次專案](https://mysh212.github.io/CHSH-nhspc112-PRE/)

<div style="page-break-after: always"></div>

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

## **B.翻譯家** <font color = 'gray'>***French***</font>
`time limit` 1s

`memory limit` 256MB

### ***Problem***
$\space \space$ 你知道用法文數數是一件困難的事嗎？
一開始，事情還很單純。首先，1 的法文是 ***un***、2 的法文是 ***deux***、3 的法文是 ***trois***、4 的法文是 ***quatre***、5 的法文是 ***cinq***、6 的法文是 ***six***（跟英文一樣，很酷對吧！）、7 的法文是 ***sept***、8 的法文是 ***huit***、9 的法文是 ***neuf***、10 的法文是 ***dix***。

$\space \space$ 法文的 11 到 16 和英文的 13 到 19 有點相似之處。英文的 13 到 19 是 -***teen*** 系列，法文的 11 到 16 則是 -***ze*** 系列。11 的法文是 ***onze***、12 的法文是 ***douze***、13 的法文是 ***treize***、14 的法文是 ***quatorze***、15 的法文是 ***quinze***、16 的法文是 ***seize***。

$\space \space$ 至於 17 到 19，我們則開始可以看到複合字的蹤影，因為這裡只有 3 個數，我們可以把它們列舉出來。17 的法文是 ***dix-sept*** (10-7)、18 的法文是 ***dix-huit*** (10-8)、19 的法文是 ***dix-neuf*** (10-9)。

$\space \space$ 接著是 20 到 69，我們首先介紹這些數中 10 的倍數的法文。20 的法文是 ***vingt***、30 的法文是 ***trente***、40 的法文是 ***quarante***、50 的法文是 ***cinquante***、60 的法文是 ***soixante***。至於其他的數，**大多數**情況下就是把十位數部和個位數部以"-"連接起來即可，舉例來說，43 的法文是 ***quarante-trois*** (40-3)、69 的法文是 ***soixante-neuf*** (60-9)。既然剛剛說的是大多數，那就代表有特例：在這些數中，如果他除以 10 餘 1，那麼十位數部和個位數部之間還要加入一個「和（***et***）」，有點類似孔子說「吾十又五而志於學」的「又」。舉例來說，31 的法文是 ***trente-et-un***、51 的法文則是 ***cinquante-et-un***。

$\space \space$ 猜猜 70 的法文是什麼？***septante***？猜錯了！是 ***soixante-dix*** (60-10)，想不到吧！其實，70 到 79 間的數 x，在翻譯時都需要解構成 60 和剩餘部份（x $-$ 60）的複合字，型如 60-(x $-$ 60)。舉例來說，73 的法文是 ***soixante-treize*** (60-13)、79 的法文更是三重複合字 ***soixante-dix-neuf*** (60-10-9)。至於上一段所提到的「模 10 餘 1」規則至此仍然適用，所以 71 的法文是 ***soixante-et-onze***。

$\space \space$ 更過份的來了：80 的法文是什麼？***huitante***？***soixante-vingt*** (60-20)？都不對！是 ***quatre-vingts*** (4-20)，因為 ，創意滿分。81 到 99 的翻譯方式則類似 60 到 79 的規則，可以視為 80 和剩餘部份（x $-$ 80）的解構，不過這裡的 80 的 ***quatre-vingts*** 是不需要加 s 的。舉例來說，83 的法文是 ***quatre-vingt-trois*** (4-20-3) （注意這邊的 vingt 沒有加 s）、97 的法文則來到四重複合字 ***quatre-vingt-dix-sept*** (4-20-10-7)。這邊，我們要再來回頭提到「模 10 餘 1」規則，這條規則在 80 到 99 是不適用的喔！因此，81 的法文是 ***quatre-vingt-un*** (4-20-1)、91 的法文則是 ***quatre-vingt-onze*** (4-20-11)。

$\space \space$ 學會了嗎？我們來寫個程式檢驗你的學習成果吧！讀入一個 $1$ 到 $99$ 的整數，請輸出它的法文翻譯。

### ***Input***

$N$ 

### ***Output***

$S$

- 為正整數$N$的法文翻譯

### ***Note***

- $1 \leq N \leq 99$

### ***Sample Input 1***
```
11
```

### ***Sample Output 1***
```
onze
```

### ***Sample Input 2***
```
97
```

### ***Sample Output 2***
```
quatre-vingt-dix-sept 
```

### ***Task***
 - ***task***: $100\\%$ ***As statement***

<div style="page-break-after: always"></div>

## **C.村長** <font color = 'gray'>***King***</font>
`time limit` 1s

`memory limit` 256MB

### ***Problem***
$\space \space$ 在一個小鎮的年度盛事中，有兩位參賽者正在進行一場激烈的競爭。他們正在進行一項數字遊戲，其中他們需要計算出兩個整數 $X$ 和 $Y$ 的**各位數字之和**。這個問題看似簡單，但對於這兩位參賽者來說卻是一個極大的挑戰。這時候極度聰明的你跳了出來，快速的講出了 $X, \space Y$ 兩者各位數字和中的**最大值**，震驚整個小鎮，從此當上了村長，過上了幸福快樂的生活。

$\space \space$ 現在給你兩個正整數 $X, \space Y$ ，請你輸出兩者各位數字和中的**最大值**。舉例來說，假設 $X = 123, \space Y = 345$ ，請你輸出 $max(1 + 2 + 3, \space 3 + 4 + 5)$ ，也就是 $12$ 。

### ***Input***

$X \space Y$

### ***Output***

$Ans$ 

### ***Note***

- $1 \leq X, Y \leq 10^{100}$

### ***Sample input***

```
1392 12
```

### ***Sample output***

```
15
```

### ***Subtask***

 - ***subtask1***: $20\\%$: $1 \leq X, Y \leq 10^9$
 - ***subtask2***: $30\\%$: $1 \leq X, Y \leq 10^{18}$
 - ***subtask3***: $50\\%$: ***As statement***

<div style="page-break-after: always"></div>

## **D.選糖果** ***<font color='#AAAAAA'>Pick</font>***
`time limit` 2s

`memory limit` 256MB

### ***Problem***

***amberela***非常喜歡吃糖果，每次放學他總是迫不及待地衝進糖果店。
這天，他發現店裡頭多出了 $n$ 種新糖果，重量分別是 $a_i,1 \leq i \leq n$ ，***amberela***非常開心，決定要將這些新糖果都試過一遍。

為了確保所有糖果都有被吃過，***amberela***決定要將這些糖果一個一個帶回家試。

然而，他身上的背包最多只能承受到重量 $k$ ，所以請你幫他算出他最多可以吃到**多少種**糖果(只能裝一次背包，且每種糖果只能吃一顆)。

### ***Input***

$n\ m$
$a_1\ a_2\ ...\ a_n$
$k_1$
$k_2$
$...$
$k_m$
其中共有 $m$ 組詢問。

### ***Output***

$Ans_1$
$Ans_2$
...
$Ans_m$

對於每一筆詢問，請輸出當背包容量為 $k_i,1 \leq i \leq m$ 時，***amberela***能夠吃到的最大糖果**種類**數量。
輸出請以換行的方式隔開。

### ***Note***

$1 \leq n,m \leq 10^5$
$1 \leq a_i \leq 10^9,\forall\ 1 \leq i \leq n$
$0 \leq k_i \leq 10^{18},\forall\ 1 \leq i \leq m$

### ***Sample Input***

```
5 4
5 3 2 6 7
1
5
11
25
```

### ***Sample Output***

```
0
2
3
5
```

### ***Subtask***

 - ***subtask1***: $10\\%$ $1 \leq n,m \leq 10$
 - ***subtask2***: $10\\%$ $1 \leq n \leq 10 ^ 5, 1 \leq m \leq 10$
 - ***subtask3***: $30\\%$ $1 \leq n \leq 10^5, 1 \leq m \leq 10^5$, $(\forall 1 \leq i \leq n,\ 1 \leq a_i \leq 1000)$
 - ***subtask4***: $50\\%$ ***As statement***

<div style="page-break-after: always"></div>

## **E.運算子** ***<font color='#AAAAAA'>Operator</font>***
`time limit` 1s

`memory limit` 256MB

### ***Problem***

***ysh***最近在修***cyana***教授的課，某天教授提出了個問題：

> 給你 $3$ 個 $True$ 、 $5$ 個 $False$ ，請問他們 $\oplus$ 出來的結果為何?

***ysh***馬上就答出答案是 $True$ 。

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

