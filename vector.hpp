/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:27:15 by lelhlami          #+#    #+#             */
/*   Updated: 2023/02/19 22:34:11 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "random_access_iterator.hpp"

namespace ft
{
    template <class T,   class Allocator = std::allocator<T> >
    class vector
    {
        public:
            typedef typename T::value_type           value_type;
            typedef Allocator   allocator_type;
            typedef size_t      size_type;
            typedef std::ptrdiff_t  difference_type;
            typedef value_type&     reference;
            typedef const value_type&     const_reference;
            typedef value_type*  pointer;
            typedef const value_type*  const_pointer;
            typedef typename value_type::random_access_iterator iterator;
            typedef const typename value_type::random_access_iterator const_iterator;
            typedef typename value_type::reverse_iterator reverse_iterator;
            typedef const typename value_type::reverse_iterator const_reverse_iterator;

        public:
        //Membres functions
            explicit vector (const Allocator& alloc = Allocator());
            explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type());
            template <class InputIterator>         vector (InputIterator first, InputIterator last,                 const allocator_type& alloc = allocator_type());
            vector (const vector& x);
            ~vector();
            vector& operator= (const vector& x);
        //Iterators 
            iterator begin();
            const_iterator begin() const;
            iterator end();
            const_iterator end() const;
            reverse_iterator rbegin();
            const_reverse_iterator rbegin() const;
            reverse_iterator rend();
            const_reverse_iterator rend() const;
            const_iterator cbegin() const noexcept;
            const_iterator cend() const noexcept;
            const_reverse_iterator crbegin() const noexcept;
            const_reverse_iterator crend() const noexcept;
        //Capacity
            size_type size() const;
            size_type max_size() const;
            void resize (size_type n, value_type val = value_type());
            size_type capacity() const;
            bool empty() const;
            void reserve (size_type n);
            void shrink_to_fit();
        //Element Access
            reference operator[] (size_type n);
            const_reference operator[] (size_type n) const;
            reference at (size_type n);
            const_reference at (size_type n) const;
            reference front();
            const_reference front() const;
            reference back();
            const_reference back() const;
            value_type* data() noexcept;
            const value_type* data() const noexcept;
        //Modifiers:
            template <class InputIterator>  void assign (InputIterator first, InputIterator last);
            void assign (size_type n, const value_type& val);
            void push_back (const value_type& val);
            void pop_back();
            iterator insert (iterator position, const value_type& val);
            void insert (iterator position, size_type n, const value_type& val);
            template <class InputIterator>    void insert (iterator position, InputIterator first, InputIterator last);
            iterator erase (iterator position);iterator erase (iterator first, iterator last);
            void swap (vector& x);
            void clear();
            template <class... Args>iterator emplace (const_iterator position, Args&&... args);
            template <class... Args>  void emplace_back (Args&&... args);
        //Allocator:
            allocator_type get_allocator() const;

    };
    //Non-member function overloads
    template <class T, class Alloc>  bool operator== (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
    template <class T, class Alloc>  bool operator!= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
    template <class T, class Alloc>  bool operator<  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
    template <class T, class Alloc>  bool operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
    template <class T, class Alloc>  bool operator>  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
    template <class T, class Alloc>  bool operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs);
    template <class T, class Alloc>  void swap (vector<T,Alloc>& x, vector<T,Alloc>& y);
}

