# Read from the file file.txt and print its transposed content to stdout.
awk '{for(i=1;i<=NF;i++){a[i] = a[i]" "$i;}}END{for(i=1;i<=NF;i++){print substr(a[i],2)}}' file.txt
