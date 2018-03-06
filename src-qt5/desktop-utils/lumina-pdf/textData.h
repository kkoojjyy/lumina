#ifndef textData_H
#define textData_H

#include <mupdf/fitz.h>

class TextData {
    private:
      fz_rect _loc;
      bool _highlighted=false;
      int _page=0;
      QString _text=""; 

    public:
      TextData(fz_rect _loc, int _page, QString _text) {
        this->_loc = _loc;
        this->_page = _page;
        this->_text = _text;
      }

      fz_rect loc() { return this->_loc; }
      bool highlighted() { return this->_highlighted; }
      int page() { return this->_page; }
      QString text() { return this->_text; }
       
      void loc(fz_rect loc) { this->_loc = loc; }
      void highlighted(bool highlighted) { this->_highlighted = highlighted; }
      void page(int page) { this->_page = page; }
      void text(QString text) { this->_text = text; }
};

#endif