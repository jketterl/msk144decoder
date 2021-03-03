#pragma once
//
// Author: Alexander Sholohov <ra9yer@yahoo.com>
//
// License: MIT
//

#include <string>

struct DecodeResult
{
    explicit DecodeResult(std::string const& s);
    std::string asString() const;
    bool isValid() const { return _result_valid; }

    bool _result_valid = false;
    std::string original_line;
    std::string utc_hhmm;
    int db_ratio = 0.0;
    float dt_shift = 0.0;
    int frequency = 0.0;
    std::string message;

};
