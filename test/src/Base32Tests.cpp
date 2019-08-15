/**
 * @file Base32Tests.cpp
 *
 * This module contains the unit tests of the Base32 functions.
 *
 * © 2019 by Richard Walters
 */

#include <gtest/gtest.h>
#include <Base64/Base32.hpp>

TEST(Base32Tests, Base32EncodeDecode) {
    // These test vectors were taken from
    // [RFC 4648](https://tools.ietf.org/html/rfc4648).
    struct TestVector {
        std::string decoding;
        std::string encoding;
    };
    const std::vector< TestVector > testVectors{
        {"", ""},
        {"f", "MY======"},
        {"fo", "MZXQ===="},
        {"foo", "MZXW6==="},
        {"foob", "MZXW6YQ="},
        {"fooba", "MZXW6YTB"},
        {"foobar", "MZXW6YTBOI======"},
    };
    for (const auto& testVector: testVectors) {
        EXPECT_EQ(
            testVector.encoding,
            Base32::Encode(testVector.decoding)
        );
        EXPECT_EQ(
            testVector.decoding,
            Base32::Decode(testVector.encoding)
        );
    }
}
