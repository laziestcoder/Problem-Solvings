PROG_NAME=$1
output=$(g++ -std=c++17 $PROG_NAME 2>&1)
if [[ $? != 0 ]]; then
    echo -e "Error:\n$output"
else
  ./a.out
fi
