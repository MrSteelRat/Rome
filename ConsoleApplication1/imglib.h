#pragma once

void output_ppm(FILE* fd, image img);

struct rgb_to_luminance_fn< double, double, double, GrayChannelValue >
{
  GrayChannelValue operator()(const double& red
    , const double& green
    , const double& blue) const
  {
    return channel_convert<GrayChannelValue>(red * 0.30 + green * 0.59 + blue * 0.11);
  }
};