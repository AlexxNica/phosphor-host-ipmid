#ifndef __HOST_IPMID_IPMI_WHITELIST_H__
#define __HOST_IPMID_IPMI_WHITELIST_H_

#include <vector>
#include <utility>

using netfncmd_pair = std::pair<unsigned char, unsigned char>;

extern const std::vector<netfncmd_pair> whitelist;

#endif
