cut -d, -f"2 3" --output-delimiter=" " data/employees.csv | tail -n +2 > data/names.txt
