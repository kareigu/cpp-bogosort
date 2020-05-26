CFILE=$1
OBJFILE="${CFILE%.*}"

g++ ./src/$CFILE -o ./bin/$OBJFILE -std=c++2a
echo  "Built file: ./src/$CFILE -> ./bin/$OBJFILE"

./bin/$OBJFILE
