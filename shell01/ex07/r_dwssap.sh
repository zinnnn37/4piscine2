cat /etc/passwd | grep -v "^#" | sed -n "n;p" | sed 's/:.*//g' | rev | sort -r | awk ''"$FT_LINE1"'<=FNR && FNR<='"$FT_LINE2"' { print }' | tr "\n" "," | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
