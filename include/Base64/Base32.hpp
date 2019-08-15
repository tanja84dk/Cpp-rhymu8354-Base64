#pragma once

/**
 * @file Base32.hpp
 *
 * This module declares the Base32 functions.
 *
 * © 2019 by Richard Walters
 */

#include <stdint.h>
#include <string>
#include <vector>

namespace Base32 {

    /**
     * This function encodes the given data using the Base32 algorithm.
     *
     * @param[in] data
     *     This is the data to encode using the Base32 algorithm.
     *
     * @return
     *     The Base32 encoding of the given data is returned.
     */
    std::string Encode(const std::vector< uint8_t >& data);

    /**
     * This function encodes the given data using the Base32 algorithm.
     *
     * @param[in] data
     *     This is the data to encode using the Base32 algorithm.
     *
     * @return
     *     The Base32 encoding of the given data is returned.
     */
    std::string Encode(const std::string& data);

    /**
     * This function decodes the given data using the Base32 algorithm.
     *
     * @param[in] data
     *     This is the data to decodes using the Base32 algorithm.
     *
     * @return
     *     The Base32 decoding of the given data is returned.
     */
    std::string Decode(const std::vector< uint8_t >& data);

    /**
     * This function decodes the given data using the Base32 algorithm.
     *
     * @param[in] data
     *     This is the data to decodes using the Base32 algorithm.
     *
     * @return
     *     The Base32 decoding of the given data is returned.
     */
    std::string Decode(const std::string& data);

}
