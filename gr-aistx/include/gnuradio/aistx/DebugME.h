/* -*- c++ -*- */
/* 
 * Copyright 2013 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_AISTX_DEBUGME_H
#define INCLUDED_AISTX_DEBUGME_H

#include <gnuradio/aistx/api.h>
#include <gnuradio/blocks/null_source.h>



namespace gr {
  namespace aistx {

    /*!
     * \brief Print the incoming BYTE sequence
     * \ingroup AISTX
     *
     */
    class AISTX_API DebugME : virtual public gr::block
    {
     public:
      typedef std::shared_ptr<DebugME> sptr;

      /*!
       * \brief Print the incoming BYTE sequence as sequence of HEXs
       *
       * Goes through the incoming sequence (const char *in) and prints it in HEXs
       */
      static sptr make(size_t itemsize);
    };

  } // namespace AISTX
} // namespace gr

#endif /* INCLUDED_AISTX_DEBUGME_H */

