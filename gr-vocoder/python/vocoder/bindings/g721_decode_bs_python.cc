/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/vocoder/g721_decode_bs.h>
// pydoc.h is automatically generated in the build directory
#include <g721_decode_bs_pydoc.h>

void bind_g721_decode_bs(py::module& m)
{

    using g721_decode_bs = ::gr::vocoder::g721_decode_bs;


    py::class_<g721_decode_bs,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<g721_decode_bs>>(m, "g721_decode_bs", D(g721_decode_bs))

        .def(py::init(&g721_decode_bs::make), D(g721_decode_bs, make))


        ;
}
