using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GenQueue
{
	class Queue<T>
	{
		// Enqueue gets value and priority(integer more/equal then 0) 
		public void Enqueue(T value, int priority)
		{
			QueueElement newEl = new QueueElement();
			newEl.value = value;
			newEl.priority = priority;
			if (currentElement == null) // In case queue is empty adds first(this) element
			{
				currentElement = newEl;
				return;
			}
			QueueElement curr = currentElement; // Else finds th place to add element. Element with higher priority would be closer to start of queue
			if (curr.nextElement == null)
			{
				if (curr.priority < newEl.priority)
				{
					newEl.nextElement = curr;
					currentElement = newEl;
					return;
				}
				else
				{
					currentElement.nextElement = newEl;
					return;
				}
			}
			while (curr.nextElement != null && newEl.priority <= curr.nextElement.priority)
			{
				curr = curr.nextElement;
			}
			newEl.nextElement = curr.nextElement;
			currentElement.nextElement = newEl;
		}

		// Dequeue returns value with highest priority and delets it from queue
		public T Dequeue()
		{
			QueueElement toReturn = currentElement;
			DeleteCurrentQueueElement();
			return toReturn.value;
		}

		private void DeleteCurrentQueueElement()
		{
			if (currentElement == null)
			{
				throw new NullReferenceException();
			}
			else
			{
				currentElement = currentElement.nextElement;
			}
		}
		private QueueElement currentElement;

		class QueueElement
		{
			public T value;
			public int priority;
			public QueueElement nextElement;
		}
	}
}
