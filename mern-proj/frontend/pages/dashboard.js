import { useState, useEffect } from "react";
import axios from "axios";

function Dashboard() {
  const [notes, setNotes] = useState([]);
  const [form, setForm] = useState({ title: "", message: "" });

  const fetchNotes = async () => {
    const res = await axios.get("http://localhost:5000/api/notes", {
      headers: { Authorization: localStorage.getItem("token") }
    });
    setNotes(res.data);
  };

  const addNote = async (e) => {
    e.preventDefault();
    await axios.post("http://localhost:5000/api/notes", form, {
      headers: { Authorization: localStorage.getItem("token") }
    });
    fetchNotes();
  };

  const deleteNote = async (id) => {
    await axios.delete(`http://localhost:5000/api/notes/${id}`, {
      headers: { Authorization: localStorage.getItem("token") }
    });
    fetchNotes();
  };

  useEffect(() => { fetchNotes(); }, []);

  return (
    <div>
      <h2>My Notes</h2>
      <form onSubmit={addNote}>
        <input type="text" placeholder="Title" onChange={(e)=>setForm({...form, title:e.target.value})} />
        <input type="text" placeholder="Message" onChange={(e)=>setForm({...form, message:e.target.value})} />
        <button type="submit">Add Note</button>
      </form>

      <ul>
        {notes.map(note => (
          <li key={note._id}>
            <b>{note.title}</b>: {note.message}
            <button onClick={() => deleteNote(note._id)}>Delete</button>
          </li>
        ))}
      </ul>
    </div>
  );
}

export default Dashboard;
