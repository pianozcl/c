
#include <stdio.h>

typedef enum FileFormat {
  PNG, JPEG, BMP, UNKNOWN   //0，1，2，3。C语言枚举其实是整数
} FileFormat;

FileFormat GuessFormat(char *file_path) {
  FILE *file = fopen(file_path, "r");
  FileFormat file_format = UNKNOWN;
  if (file) {
    char buffer[8] = {0};
    size_t bytes_count = fread(buffer, 1, 8, file);

    if (bytes_count == 8) {
      if (*((short *) buffer) == 0x4D42)
    }

    fclose(file);
  }
  return file_format;
}
int main() {
  FileFormat file_format = PNG;
}