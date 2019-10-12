a=$1
b=$3
op=$2
res=1
case $op in
	"+")
		res=`expr $a + $b`
		;;
	"-")
		res=`expr $a - $b`
		;;
	"x")
		res=`expr $a \* $b`
		;;
	"/")
		res=`expr $a \/ $b`
		;;
	"%")
		res=`expr $a \% $b`
		;;
	"^")
		while test $b -gt 0
		do
			res=`expr $res * $a`
			b=`expr $b - 1`
		done
		;;
	*)
		echo "Invalid Operation"
		;;
esac
echo $res
