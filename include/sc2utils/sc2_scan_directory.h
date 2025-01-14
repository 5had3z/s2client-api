#pragma once

#include <string>
#include <vector>

namespace sc2 {

int scan_directory(const char *directory_path,
  std::vector<std::string> &files,
  bool full_path = false,
  bool list_directories = false);

}
