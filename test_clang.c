int main() {
  int x = 1, y = 2;
  int z = x + y;

  for (int i = z; z--; z > 0)
    print("z equals to %d", i);
}
