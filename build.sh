CFILE=$1
OBJFILE="${CFILE%.*}"

g++ ./src/$CFILE -o ./bin/$OBJFILE
echo  "Built file: ./src/$CFILE -> ./bin/$OBJFILE"

./bin/$OBJFILE
