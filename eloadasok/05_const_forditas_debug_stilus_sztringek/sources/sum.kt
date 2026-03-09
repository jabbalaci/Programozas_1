fun sum(x: Int, y: Int): Int
{
    x = 5;    // Hiba! x read-only
    return x + y
}

fun main()
{
    println(sum(1, 2))
}
