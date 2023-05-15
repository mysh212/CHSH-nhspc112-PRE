## **B.翻譯家** <font color = 'gray'>***French***</font>
`time limit` 1s

`memory limit` 256MB

### ***Problem***
$\space \space$ 你知道用法文數數是一件困難的事嗎？
一開始，事情還很單純。首先，1 的法文是 ***un***、2 的法文是 ***deux***、3 的法文是 ***trois***、4 的法文是 ***quatre***、5 的法文是 ***cinq***、6 的法文是 ***six***（跟英文一樣，很酷對吧！）、7 的法文是 ***sept***、8 的法文是 ***huit***、9 的法文是 ***neuf***、10 的法文是 ***dix***。

$\space \space$ 法文的 11 到 16 和英文的 13 到 19 有點相似之處。英文的 13 到 19 是 -***teen*** 系列，法文的 11 到 16 則是 -***ze*** 系列。11 的法文是 ***onze***、12 的法文是 ***douze***、13 的法文是 ***treize***、14 的法文是 ***quatorze***、15 的法文是 ***quinze***、16 的法文是 ***seize***。

$\space \space$ 至於 17 到 19，我們則開始可以看到複合字的蹤影，因為這裡只有 3 個數，我們可以把它們列舉出來。17 的法文是 ***dix-sept*** (10-7)、18 的法文是 ***dix-huit*** (10-8)、19 的法文是 ***dix-neuf*** (10-9)。

$\space \space$ 接著是 20 到 69，我們首先介紹這些數中 10 的倍數的法文。20 的法文是 ***vingt***、30 的法文是 ***trente***、40 的法文是 ***quarante***、50 的法文是 ***cinquante***、60 的法文是 ***soixante***。至於其他的數，**大多數**情況下就是把十位數部和個位數部以"-"連接起來即可，舉例來說，43 的法文是 ***quarante-trois*** (40-3)、69 的法文是 ***soixante-neuf*** (60-9)。既然剛剛說的是大多數，那就代表有特例：在這些數中，如果他除以 10 餘 1，那麼十位數部和個位數部之間還要加入一個「和（***et***）」，有點類似孔子說「吾十又五而志於學」的「又」。舉例來說，31 的法文是 ***trente-et-un***、51 的法文則是 ***cinquante-et-un***。

$\space \space$ 學會了嗎？我們來寫個程式檢驗你的學習成果吧！讀入一個 $1$ 到 $69$ 的整數，請輸出它的法文翻譯。

### ***Input***

$N$ 

### ***Output***

$S$

- 為正整數$N$的法文翻譯

### ***Note***

- $1 \leq N \leq 69$

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
69
```

### ***Sample Output 2***
```
soixante-neuf
```

### ***Task***
 - ***task***: $100\\%$ ***As statement***

<div style="page-break-after: always"></div>
