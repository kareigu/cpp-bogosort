CFILE=$1
OBJFILE="${CFILE%.*}"

g++ ./src/$CFILE -o ./bin/$OBJFILE -std=c++17
echo  "Built file: ./src/$CFILE -> ./bin/$OBJFILE"

./bin/$OBJFILE
