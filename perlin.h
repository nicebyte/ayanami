#pragma once

#include "noise.h"

class perlin_noise : public noise {
public:
  perlin_noise();
  float sample(const nm::float3 &point) const override;

private:
  const nm::float3 grad(const nm::float3 &p) const;

  static constexpr int kNumGradients = 256;
  nm::float3 gradients_[kNumGradients] = {};
  int perms_[3][kNumGradients];
};
