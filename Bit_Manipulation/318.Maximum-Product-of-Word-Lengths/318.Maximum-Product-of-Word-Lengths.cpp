### 318.Maximum-Product-of-Word-Lengths

最直观的想法，从字符串数组中穷举两两的组合，找出最大的乘积，这样o(n^2)的复杂度其实可以接受。主要的问题就是对于每一对组合，要判断这两个字符串是否有相同的字母，这样的操作需要不少的语句，乘以n^2之后耗时就非常可观。

我们的想法是预处理一遍words，利用o(n)的时间将其字母信息存储下来，当穷举两两组合时所需要的判定时间减少。

一个比较简单的想法是，因为小写字母只有26个，可以用一个32位的int每一个bit来代表一个字母出现与否。这样只用一个int就能编码一个word所包含的字母信息了。两个word是否含有有相同的字母，则让两个对应code进行与操作，如果结果不是0，说明有一个bit不是零，代表了这个字母在两个word里都出现过。
