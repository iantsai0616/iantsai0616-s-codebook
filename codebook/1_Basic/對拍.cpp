先編譯成執行檔 good, bad ，然後寫好生測資用的東西（用 python 或 c++ 都可）後，把這個檔案存成 run.sh

#!/usr/bin/env bash

i=0
while true
do
    echo $i
    ((++i))
    ./gen > in
    ./good < in > out1
    ./bad < in > out2
    diff out1 out2 || break
done

之後再 terminal 打 chmod +x run.sh 後 ./run.sh 就好了