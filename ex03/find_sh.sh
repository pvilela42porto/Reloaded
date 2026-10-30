find . -type f -name "*.sh" -exec base {} ";" | sed 's/.sh$//' 
