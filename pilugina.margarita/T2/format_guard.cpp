#include "format_guard.hpp"

pilugina::FormatGuard::FormatGuard(std::basic_ios< char > &s):
  s_(s),
  width_(s.width()),
  precision_(s.precision()),
  fmt_(s.flags()),
  fill_(s.fill())
{
}

pilugina::FormatGuard::~FormatGuard()
{
  s_.width(width_);
  s_.precision(precision_);
  s_.flags(fmt_);
  s_.fill(fill_);
}
