/**
 * @file Base64Tests.cpp
 *
 * This module contains the unit tests of the Base64 functions.
 *
 * © 2018 by Richard Walters
 */

#include <gtest/gtest.h>
#include <Base64/Base64.hpp>

TEST(Base64Tests, Base64EncodeDecode) {
    // These test vectors were taken from
    // [RFC 4648](https://tools.ietf.org/html/rfc4648).
    struct TestVector {
        std::string decoding;
        std::string encoding;
    };
    const std::vector< TestVector > testVectors{
        {"", ""},
        {"f", "Zg=="},
        {"fo", "Zm8="},
        {"foo", "Zm9v"},
        {"foob", "Zm9vYg=="},
        {"fooba", "Zm9vYmE="},
        {"foobar", "Zm9vYmFy"},
    };
    for (const auto& testVector: testVectors) {
        EXPECT_EQ(
            testVector.encoding,
            Base64::Base64Encode(testVector.decoding)
        );
        EXPECT_EQ(
            testVector.decoding,
            Base64::Base64Decode(testVector.encoding)
        );
    }
}
