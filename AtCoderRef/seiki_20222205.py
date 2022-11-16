# 英大文字および数字からなる 2 文字の文字列が N 個与えられます。i 個目の文字列は Siです。
# 以下の 3 つの条件をすべて満たすか判定してください。
# ・すべての文字列に対して、1 文字目は H , D , C , S のどれかである。
# ・すべての文字列に対して、2 文字目は A , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , T , J , Q , K のどれかである。
# ・すべての文字列は相異なる。つまり、i=j ならば Si=Sjである。

import re

pattern = re.compile(r'([HDCS])(A|[2-9]|[TJQK])')

n = int(input())
strs = [input() for i in range(n)]

if any(not re.match(pattern, s) for s in strs):
    print("No")

else:
    print("Yes" if len(set(strs)) == n else "No")
