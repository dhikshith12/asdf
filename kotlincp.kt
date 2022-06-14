fun main()
{
    val n = readln().toInt()
    println(findFixPoint(n))
}
val eps = 1E-10

tailrec fun findFixPoint(x: Double = 1.0): Double = 
    if(Math.abs(x - Math.cos(x))<eps) x else findFixPoint(Math.cos(x))