func add(x: int, y: int): int =
  return x + y

proc main() =
  for i in 1 .. 3:
    echo "hello Nim"
  #
  echo add(2, 2)

# ############################################################################

when isMainModule:
  main()
