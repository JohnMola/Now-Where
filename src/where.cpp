#include "where.hpp"


int where(const std::string &str, const char ch) {
   for (size_t i = 0; i < str.size(); ++i) {
      if (str[i] == ch) {
         return static_cast<int>(i);
      }
   }
   return -1;
}

int where(const std::string &str, const std::string &sub) {
   if (sub.empty() || sub.size() > str.size()) {
      return -1;
   }

   for (size_t i = 0; i <= str.size() - sub.size(); ++i) {
      bool match = true;
      for (size_t j = 0; j < sub.size(); ++j) {
         if (str[i + j] != sub[j]) {
            match = false;
            break;
         }
      }
      if (match) {
         return static_cast<int>(i);
      }
   }
   return -1;
}