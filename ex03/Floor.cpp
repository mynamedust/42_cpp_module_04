#include "Floor.hpp"


Floor::Floor() {
	_items = NULL;
};

Floor::~Floor() {
	n_item *start = _items;
	while (_items->next) {
		_items = _items->next;
		delete start;
		start = _items;
	}
	delete _items;
};

Floor::Floor(const Floor &other) {
	*this = other;
};

Floor &Floor::operator=(const Floor &other) {
	if (this != &other) {
		this->_items = other._items;
	}
	return *this;
};

void Floor::drop(AMateria *materia) {
	n_item* newitem;

	newitem = new n_item;
	newitem->item = materia;

	if (!_items) {
		_items = newitem;
		return;
	}
	while (_items->next)
		_items = _items->next;
	_items->next = newitem;
}